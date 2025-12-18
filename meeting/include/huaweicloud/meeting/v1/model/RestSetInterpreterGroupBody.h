
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSetInterpreterGroupBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSetInterpreterGroupBody_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/meeting/v1/model/InterpreterGroupInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设置传译组请求体
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestSetInterpreterGroupBody
    : public ModelBase
{
public:
    RestSetInterpreterGroupBody();
    virtual ~RestSetInterpreterGroupBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestSetInterpreterGroupBody members

    /// <summary>
    /// 传译组列表信息
    /// </summary>

    std::vector<InterpreterGroupInfo>& getInterpreterGroups();
    bool interpreterGroupsIsSet() const;
    void unsetinterpreterGroups();
    void setInterpreterGroups(const std::vector<InterpreterGroupInfo>& value);


protected:
    std::vector<InterpreterGroupInfo> interpreterGroups_;
    bool interpreterGroupsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSetInterpreterGroupBody_H_
