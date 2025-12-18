
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ListNetworkQualityResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ListNetworkQualityResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/UserQos.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ListNetworkQualityResponse
    : public ModelBase, public HttpResponse
{
public:
    ListNetworkQualityResponse();
    virtual ~ListNetworkQualityResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListNetworkQualityResponse members

    /// <summary>
    /// 结果码
    /// </summary>

    int32_t getReturnCode() const;
    bool returnCodeIsSet() const;
    void unsetreturnCode();
    void setReturnCode(int32_t value);

    /// <summary>
    /// 结果描述
    /// </summary>

    std::string getReturnDesc() const;
    bool returnDescIsSet() const;
    void unsetreturnDesc();
    void setReturnDesc(const std::string& value);

    /// <summary>
    /// 会场Qos列表
    /// </summary>

    std::vector<UserQos>& getQosList();
    bool qosListIsSet() const;
    void unsetqosList();
    void setQosList(const std::vector<UserQos>& value);


protected:
    int32_t returnCode_;
    bool returnCodeIsSet_;
    std::string returnDesc_;
    bool returnDescIsSet_;
    std::vector<UserQos> qosList_;
    bool qosListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ListNetworkQualityResponse_H_
