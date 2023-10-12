
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_BusinessCardResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_BusinessCardResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/ExtraInfoList.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_OCR_V1_EXPORT  BusinessCardResult
    : public ModelBase
{
public:
    BusinessCardResult();
    virtual ~BusinessCardResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BusinessCardResult members

    /// <summary>
    /// 姓名列表。 
    /// </summary>

    std::vector<std::string>& getName();
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::vector<std::string>& value);

    /// <summary>
    /// 职位头衔列表。 
    /// </summary>

    std::vector<std::string>& getTitle();
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::vector<std::string>& value);

    /// <summary>
    /// 公司列表。 
    /// </summary>

    std::vector<std::string>& getCompany();
    bool companyIsSet() const;
    void unsetcompany();
    void setCompany(const std::vector<std::string>& value);

    /// <summary>
    /// 部门列表。 
    /// </summary>

    std::vector<std::string>& getDepartment();
    bool departmentIsSet() const;
    void unsetdepartment();
    void setDepartment(const std::vector<std::string>& value);

    /// <summary>
    /// 联系方式列表。 
    /// </summary>

    std::vector<std::string>& getPhone();
    bool phoneIsSet() const;
    void unsetphone();
    void setPhone(const std::vector<std::string>& value);

    /// <summary>
    /// 地址列表。 
    /// </summary>

    std::vector<std::string>& getAddress();
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::vector<std::string>& value);

    /// <summary>
    /// 邮箱列表。 
    /// </summary>

    std::vector<std::string>& getEmail();
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const std::vector<std::string>& value);

    /// <summary>
    /// 传真列表。 
    /// </summary>

    std::vector<std::string>& getFax();
    bool faxIsSet() const;
    void unsetfax();
    void setFax(const std::vector<std::string>& value);

    /// <summary>
    /// 邮编列表。 
    /// </summary>

    std::vector<std::string>& getPostcode();
    bool postcodeIsSet() const;
    void unsetpostcode();
    void setPostcode(const std::vector<std::string>& value);

    /// <summary>
    /// 公司网址列表。 
    /// </summary>

    std::vector<std::string>& getWebsite();
    bool websiteIsSet() const;
    void unsetwebsite();
    void setWebsite(const std::vector<std::string>& value);

    /// <summary>
    /// 其余信息列表。 
    /// </summary>

    std::vector<ExtraInfoList>& getExtraInfoList();
    bool extraInfoListIsSet() const;
    void unsetextraInfoList();
    void setExtraInfoList(const std::vector<ExtraInfoList>& value);

    /// <summary>
    /// 返回矫正后的名片图像的BASE64编码。 
    /// </summary>

    std::string getAdjustedImage() const;
    bool adjustedImageIsSet() const;
    void unsetadjustedImage();
    void setAdjustedImage(const std::string& value);


protected:
    std::vector<std::string> name_;
    bool nameIsSet_;
    std::vector<std::string> title_;
    bool titleIsSet_;
    std::vector<std::string> company_;
    bool companyIsSet_;
    std::vector<std::string> department_;
    bool departmentIsSet_;
    std::vector<std::string> phone_;
    bool phoneIsSet_;
    std::vector<std::string> address_;
    bool addressIsSet_;
    std::vector<std::string> email_;
    bool emailIsSet_;
    std::vector<std::string> fax_;
    bool faxIsSet_;
    std::vector<std::string> postcode_;
    bool postcodeIsSet_;
    std::vector<std::string> website_;
    bool websiteIsSet_;
    std::vector<ExtraInfoList> extraInfoList_;
    bool extraInfoListIsSet_;
    std::string adjustedImage_;
    bool adjustedImageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_BusinessCardResult_H_
