
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_TracksInfo_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_TracksInfo_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  TracksInfo
    : public ModelBase
{
public:
    TracksInfo();
    virtual ~TracksInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TracksInfo members

    /// <summary>
    /// 音频轨的声道layout 
    /// </summary>

    std::string getChannelLayout() const;
    bool channelLayoutIsSet() const;
    void unsetchannelLayout();
    void setChannelLayout(const std::string& value);

    /// <summary>
    /// 音频轨对应语言描述 
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);


protected:
    std::string channelLayout_;
    bool channelLayoutIsSet_;
    std::string language_;
    bool languageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_TracksInfo_H_
