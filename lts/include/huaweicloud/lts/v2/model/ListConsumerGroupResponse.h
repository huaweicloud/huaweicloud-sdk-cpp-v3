
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListConsumerGroupResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListConsumerGroupResponse_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/ConsumerGroupInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ListConsumerGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    ListConsumerGroupResponse();
    virtual ~ListConsumerGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListConsumerGroupResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<ConsumerGroupInfo>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<ConsumerGroupInfo>& value);


protected:
    std::vector<ConsumerGroupInfo> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListConsumerGroupResponse_H_