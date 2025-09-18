
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueConfigFieldsResponseBody_result_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueConfigFieldsResponseBody_result_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/projectman/v4/model/IssueConfigFieldsResponseBody_result_config_fields.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询结果
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueConfigFieldsResponseBody_result
    : public ModelBase
{
public:
    IssueConfigFieldsResponseBody_result();
    virtual ~IssueConfigFieldsResponseBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueConfigFieldsResponseBody_result members

    /// <summary>
    /// 字段配置
    /// </summary>

    std::vector<IssueConfigFieldsResponseBody_result_config_fields>& getConfigFields();
    bool configFieldsIsSet() const;
    void unsetconfigFields();
    void setConfigFields(const std::vector<IssueConfigFieldsResponseBody_result_config_fields>& value);


protected:
    std::vector<IssueConfigFieldsResponseBody_result_config_fields> configFields_;
    bool configFieldsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueConfigFieldsResponseBody_result_H_
