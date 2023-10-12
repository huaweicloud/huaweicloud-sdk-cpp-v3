
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ListAgentRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ListAgentRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ListAgentRequest
    : public ModelBase
{
public:
    ListAgentRequest();
    virtual ~ListAgentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAgentRequest members

    /// <summary>
    /// 每页显示条目数，正整数
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 偏移值,正整数
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 客户端ID
    /// </summary>

    std::string getAgentId() const;
    bool agentIdIsSet() const;
    void unsetagentId();
    void setAgentId(const std::string& value);


protected:
    std::string limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string agentId_;
    bool agentIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAgentRequest& dereference_from_shared_ptr(std::shared_ptr<ListAgentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ListAgentRequest_H_
