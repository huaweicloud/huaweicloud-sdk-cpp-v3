
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_ListenerAccessControlPolicy_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_ListenerAccessControlPolicy_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ga/v1/model/ListenerAccessControlType.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 监听器的访问控制策略。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  ListenerAccessControlPolicy
    : public ModelBase
{
public:
    ListenerAccessControlPolicy();
    virtual ~ListenerAccessControlPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListenerAccessControlPolicy members

    /// <summary>
    /// 监听器ID。
    /// </summary>

    std::string getListenerId() const;
    bool listenerIdIsSet() const;
    void unsetlistenerId();
    void setListenerId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListenerAccessControlType getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const ListenerAccessControlType& value);


protected:
    std::string listenerId_;
    bool listenerIdIsSet_;
    ListenerAccessControlType type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_ListenerAccessControlPolicy_H_
