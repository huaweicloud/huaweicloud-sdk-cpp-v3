
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultTagsCreateReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultTagsCreateReq_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/Tag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  VaultTagsCreateReq
    : public ModelBase
{
public:
    VaultTagsCreateReq();
    virtual ~VaultTagsCreateReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VaultTagsCreateReq members

    /// <summary>
    /// 
    /// </summary>

    Tag getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const Tag& value);


protected:
    Tag tag_;
    bool tagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultTagsCreateReq_H_
