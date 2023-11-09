
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowJobInstanceDagRequest_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowJobInstanceDagRequest_H_


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
class HUAWEICLOUD_TICS_V1_EXPORT  ShowJobInstanceDagRequest
    : public ModelBase
{
public:
    ShowJobInstanceDagRequest();
    virtual ~ShowJobInstanceDagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowJobInstanceDagRequest members

    /// <summary>
    /// 实例id，最大32位，字母和数字组成
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 联盟id，最大32位，字母和数字组成
    /// </summary>

    std::string getLeagueId() const;
    bool leagueIdIsSet() const;
    void unsetleagueId();
    void setLeagueId(const std::string& value);

    /// <summary>
    /// 轮数，最小值0最大值0x7fffffff
    /// </summary>

    int32_t getRoundId() const;
    bool roundIdIsSet() const;
    void unsetroundId();
    void setRoundId(int32_t value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string leagueId_;
    bool leagueIdIsSet_;
    int32_t roundId_;
    bool roundIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowJobInstanceDagRequest& dereference_from_shared_ptr(std::shared_ptr<ShowJobInstanceDagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowJobInstanceDagRequest_H_
