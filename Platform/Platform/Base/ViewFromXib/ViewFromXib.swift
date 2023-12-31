import Foundation
import UIKit

class ViewFromXib: UIView, ViewFromXibProtocol {

    override init(frame: CGRect) {
        super.init(frame: frame)

        xibSetup()
        setupViews()
    }

    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        xibSetup()
        setupViews()
    }

    override func prepareForInterfaceBuilder() {
        super.prepareForInterfaceBuilder()
        setupViews()
    }

    func setupViews() {
    }
}
