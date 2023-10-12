
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateMemberStatusResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateMemberStatusResponse_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/Member.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  UpdateMemberStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateMemberStatusResponse();
    virtual ~UpdateMemberStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateMemberStatusResponse members

    /// <summary>
    /// 
    /// </summary>

    Member getMember() const;
    bool memberIsSet() const;
    void unsetmember();
    void setMember(const Member& value);


protected:
    Member member_;
    bool memberIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateMemberStatusResponse_H_
