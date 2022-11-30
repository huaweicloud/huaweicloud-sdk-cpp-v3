
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ListVpcsResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ListVpcsResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/Vpc.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  ListVpcsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListVpcsResponse();
    virtual ~ListVpcsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListVpcsResponse members

    /// <summary>
    /// vpc对象列表
    /// </summary>

    std::vector<Vpc>& getVpcs();
    bool vpcsIsSet() const;
    void unsetvpcs();
    void setVpcs(const std::vector<Vpc>& value);


protected:
    std::vector<Vpc> vpcs_;
    bool vpcsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ListVpcsResponse_H_
