
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RealTimeConfInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RealTimeConfInfo_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 在线会议信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RealTimeConfInfo
    : public ModelBase
{
public:
    RealTimeConfInfo();
    virtual ~RealTimeConfInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RealTimeConfInfo members

    /// <summary>
    /// 主持人与会者标识。
    /// </summary>

    std::string getChairID() const;
    bool chairIDIsSet() const;
    void unsetchairID();
    void setChairID(const std::string& value);

    /// <summary>
    /// 联席主持人会场id。
    /// </summary>

    std::vector<std::string>& getCoHosts();
    bool coHostsIsSet() const;
    void unsetcoHosts();
    void setCoHosts(const std::vector<std::string>& value);


protected:
    std::string chairID_;
    bool chairIDIsSet_;
    std::vector<std::string> coHosts_;
    bool coHostsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RealTimeConfInfo_H_
