
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FeatureResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FeatureResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  FeatureResult
    : public ModelBase
{
public:
    FeatureResult();
    virtual ~FeatureResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FeatureResult members

    /// <summary>
    /// 特性名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 特性是否开启。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 特性中文描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 特性值类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 特性值。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 特性值范围。
    /// </summary>

    std::string getRange() const;
    bool rangeIsSet() const;
    void unsetrange();
    void setRange(const std::string& value);

    /// <summary>
    /// 特性范围描述。
    /// </summary>

    std::string getRangeDescription() const;
    bool rangeDescriptionIsSet() const;
    void unsetrangeDescription();
    void setRangeDescription(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string range_;
    bool rangeIsSet_;
    std::string rangeDescription_;
    bool rangeDescriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FeatureResult_H_
