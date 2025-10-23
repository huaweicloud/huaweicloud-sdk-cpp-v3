
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MrCherryRevertDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MrCherryRevertDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  MrCherryRevertDto
    : public ModelBase
{
public:
    MrCherryRevertDto();
    virtual ~MrCherryRevertDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MrCherryRevertDto members

    /// <summary>
    /// 分支名
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// 是否通过新建合并请求来Cherry pick或revert合并请求
    /// </summary>

    bool isWithNewMergeRequest() const;
    bool withNewMergeRequestIsSet() const;
    void unsetwithNewMergeRequest();
    void setWithNewMergeRequest(bool value);

    /// <summary>
    /// 提交信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string branch_;
    bool branchIsSet_;
    bool withNewMergeRequest_;
    bool withNewMergeRequestIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MrCherryRevertDto_H_
