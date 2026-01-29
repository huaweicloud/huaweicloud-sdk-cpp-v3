
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteIssuesRequestV4_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteIssuesRequestV4_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchDeleteIssuesRequestV4
    : public ModelBase
{
public:
    BatchDeleteIssuesRequestV4();
    virtual ~BatchDeleteIssuesRequestV4();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteIssuesRequestV4 members

    /// <summary>
    /// 工作项的id
    /// </summary>

    std::vector<int32_t>& getIssueIds();
    bool issueIdsIsSet() const;
    void unsetissueIds();
    void setIssueIds(std::vector<int32_t> value);


protected:
    std::vector<int32_t> issueIds_;
    bool issueIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteIssuesRequestV4_H_
