
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowAlarmConfigResponse_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowAlarmConfigResponse_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ShowAlarmConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAlarmConfigResponse();
    virtual ~ShowAlarmConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAlarmConfigResponse members

    /// <summary>
    /// 0开启 1关闭
    /// </summary>

    std::string getBlackhole() const;
    bool blackholeIsSet() const;
    void unsetblackhole();
    void setBlackhole(const std::string& value);

    /// <summary>
    /// 0开启 1关闭
    /// </summary>

    std::string getDdos() const;
    bool ddosIsSet() const;
    void unsetddos();
    void setDdos(const std::string& value);

    /// <summary>
    /// topic名称
    /// </summary>

    std::string getTopicName() const;
    bool topicNameIsSet() const;
    void unsettopicName();
    void setTopicName(const std::string& value);

    /// <summary>
    /// topic订阅链接
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);


protected:
    std::string blackhole_;
    bool blackholeIsSet_;
    std::string ddos_;
    bool ddosIsSet_;
    std::string topicName_;
    bool topicNameIsSet_;
    std::string topicUrn_;
    bool topicUrnIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowAlarmConfigResponse_H_
