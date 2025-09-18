
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueRequestV4_custom_fields_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueRequestV4_custom_fields_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListIssueRequestV4_custom_fields
    : public ModelBase
{
public:
    ListIssueRequestV4_custom_fields();
    virtual ~ListIssueRequestV4_custom_fields();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIssueRequestV4_custom_fields members

    /// <summary>
    /// 自定义属性字段
    /// </summary>

    std::string getCustomField() const;
    bool customFieldIsSet() const;
    void unsetcustomField();
    void setCustomField(const std::string& value);

    /// <summary>
    /// 自定义属性对应的值
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string customField_;
    bool customFieldIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueRequestV4_custom_fields_H_
