
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ListProtectableResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ListProtectableResponse_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/ProtectablesResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ListProtectableResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProtectableResponse();
    virtual ~ListProtectableResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProtectableResponse members

    /// <summary>
    /// 可保护性查询实例
    /// </summary>

    std::vector<ProtectablesResp>& getInstances();
    bool instancesIsSet() const;
    void unsetinstances();
    void setInstances(const std::vector<ProtectablesResp>& value);


protected:
    std::vector<ProtectablesResp> instances_;
    bool instancesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ListProtectableResponse_H_
