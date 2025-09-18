
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueCustomFieldsResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueCustomFieldsResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueCustomField.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListIssueCustomFieldsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListIssueCustomFieldsResponse();
    virtual ~ListIssueCustomFieldsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIssueCustomFieldsResponse members

    /// <summary>
    /// 自定义字段返回数据
    /// </summary>

    std::vector<IssueCustomField>& getDatas();
    bool datasIsSet() const;
    void unsetdatas();
    void setDatas(const std::vector<IssueCustomField>& value);


protected:
    std::vector<IssueCustomField> datas_;
    bool datasIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueCustomFieldsResponse_H_
