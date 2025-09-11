
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowProjectAsyncStatusLogInfoResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowProjectAsyncStatusLogInfoResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ShowProjectAsyncStatusLogInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowProjectAsyncStatusLogInfoResponse();
    virtual ~ShowProjectAsyncStatusLogInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProjectAsyncStatusLogInfoResponse members

    /// <summary>
    /// 日志组名称
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// 日志组id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 日志流id
    /// </summary>

    std::string getStreamId() const;
    bool streamIdIsSet() const;
    void unsetstreamId();
    void setStreamId(const std::string& value);

    /// <summary>
    /// 日志流名称
    /// </summary>

    std::string getStreamName() const;
    bool streamNameIsSet() const;
    void unsetstreamName();
    void setStreamName(const std::string& value);


protected:
    std::string groupName_;
    bool groupNameIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::string streamId_;
    bool streamIdIsSet_;
    std::string streamName_;
    bool streamNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowProjectAsyncStatusLogInfoResponse_H_
