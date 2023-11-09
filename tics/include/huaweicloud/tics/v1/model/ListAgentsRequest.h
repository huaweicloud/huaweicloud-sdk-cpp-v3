
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_ListAgentsRequest_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_ListAgentsRequest_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  ListAgentsRequest
    : public ModelBase
{
public:
    ListAgentsRequest();
    virtual ~ListAgentsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAgentsRequest members

    /// <summary>
    /// 每页记录数，取值0-100
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 记录数偏移量 
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 可信节点名称 
    /// </summary>

    std::string getAgentName() const;
    bool agentNameIsSet() const;
    void unsetagentName();
    void setAgentName(const std::string& value);

    /// <summary>
    /// 联盟名称 
    /// </summary>

    std::string getLeagueName() const;
    bool leagueNameIsSet() const;
    void unsetleagueName();
    void setLeagueName(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string agentName_;
    bool agentNameIsSet_;
    std::string leagueName_;
    bool leagueNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAgentsRequest& dereference_from_shared_ptr(std::shared_ptr<ListAgentsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_ListAgentsRequest_H_
