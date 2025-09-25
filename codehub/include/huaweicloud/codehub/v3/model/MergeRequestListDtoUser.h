
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeRequestListDtoUser_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeRequestListDtoUser_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  MergeRequestListDtoUser
    : public ModelBase
{
public:
    MergeRequestListDtoUser();
    virtual ~MergeRequestListDtoUser();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeRequestListDtoUser members

    /// <summary>
    /// 当前用户是否可合入
    /// </summary>

    bool isCanMerge() const;
    bool canMergeIsSet() const;
    void unsetcanMerge();
    void setCanMerge(bool value);


protected:
    bool canMerge_;
    bool canMergeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeRequestListDtoUser_H_
