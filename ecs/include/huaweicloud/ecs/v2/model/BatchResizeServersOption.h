
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchResizeServersOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchResizeServersOption_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ServerId.h>
#include <huaweicloud/ecs/v2/model/Promotion.h>
#include <string>
#include <huaweicloud/ecs/v2/model/CpuOptions.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  BatchResizeServersOption
    : public ModelBase
{
public:
    BatchResizeServersOption();
    virtual ~BatchResizeServersOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchResizeServersOption members

    /// <summary>
    /// flavor
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<ServerId>& getServers();
    bool serversIsSet() const;
    void unsetservers();
    void setServers(const std::vector<ServerId>& value);

    /// <summary>
    /// 
    /// </summary>

    CpuOptions getCpuOptions() const;
    bool cpuOptionsIsSet() const;
    void unsetcpuOptions();
    void setCpuOptions(const CpuOptions& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Promotion getPromotion() const;
    bool promotionIsSet() const;
    void unsetpromotion();
    void setPromotion(const Promotion& value);


protected:
    std::string flavorRef_;
    bool flavorRefIsSet_;
    std::vector<ServerId> servers_;
    bool serversIsSet_;
    CpuOptions cpuOptions_;
    bool cpuOptionsIsSet_;
    std::string mode_;
    bool modeIsSet_;
    Promotion promotion_;
    bool promotionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchResizeServersOption_H_
