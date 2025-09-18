
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueCustomFieldsRequestBody_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueCustomFieldsRequestBody_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询Scrum工作项的自定义字段，custom_fields和names的相关自定义字段都返回
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListIssueCustomFieldsRequestBody
    : public ModelBase
{
public:
    ListIssueCustomFieldsRequestBody();
    virtual ~ListIssueCustomFieldsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIssueCustomFieldsRequestBody members

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::vector<std::string>& getCustomFields();
    bool customFieldsIsSet() const;
    void unsetcustomFields();
    void setCustomFields(const std::vector<std::string>& value);

    /// <summary>
    /// 自定义字段页面显示的含义
    /// </summary>

    std::vector<std::string>& getNames();
    bool namesIsSet() const;
    void unsetnames();
    void setNames(const std::vector<std::string>& value);

    /// <summary>
    /// 查询结果是否包括未使用的自定义字段，默认仅查询使用中的自定义字段，设为true时查询项目中所有自定义字段
    /// </summary>

    bool isIncludedNotInUse() const;
    bool includedNotInUseIsSet() const;
    void unsetincludedNotInUse();
    void setIncludedNotInUse(bool value);


protected:
    std::vector<std::string> customFields_;
    bool customFieldsIsSet_;
    std::vector<std::string> names_;
    bool namesIsSet_;
    bool includedNotInUse_;
    bool includedNotInUseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueCustomFieldsRequestBody_H_
