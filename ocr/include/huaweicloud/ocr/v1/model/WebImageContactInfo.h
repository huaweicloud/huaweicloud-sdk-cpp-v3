
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageContactInfo_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageContactInfo_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  WebImageContactInfo
    : public ModelBase
{
public:
    WebImageContactInfo();
    virtual ~WebImageContactInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// WebImageContactInfo members

    /// <summary>
    /// 传入contact_info时的返回，为姓名。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 传入contact_info时的返回，联系电话。 
    /// </summary>

    std::string getPhone() const;
    bool phoneIsSet() const;
    void unsetphone();
    void setPhone(const std::string& value);

    /// <summary>
    /// 传入contact_info时的返回，省。 
    /// </summary>

    std::string getProvince() const;
    bool provinceIsSet() const;
    void unsetprovince();
    void setProvince(const std::string& value);

    /// <summary>
    /// 传入contact_info时的返回，市。 
    /// </summary>

    std::string getCity() const;
    bool cityIsSet() const;
    void unsetcity();
    void setCity(const std::string& value);

    /// <summary>
    /// 传入contact_info时的返回，县区。 
    /// </summary>

    std::string getDistrict() const;
    bool districtIsSet() const;
    void unsetdistrict();
    void setDistrict(const std::string& value);

    /// <summary>
    /// 传入contact_info时的返回，详细地址（不含省市区）。 
    /// </summary>

    std::string getDetailAddress() const;
    bool detailAddressIsSet() const;
    void unsetdetailAddress();
    void setDetailAddress(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string province_;
    bool provinceIsSet_;
    std::string city_;
    bool cityIsSet_;
    std::string district_;
    bool districtIsSet_;
    std::string detailAddress_;
    bool detailAddressIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_WebImageContactInfo_H_
