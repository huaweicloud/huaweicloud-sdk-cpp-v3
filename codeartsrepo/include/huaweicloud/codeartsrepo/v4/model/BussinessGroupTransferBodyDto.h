
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BussinessGroupTransferBodyDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BussinessGroupTransferBodyDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 移交代码组
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  BussinessGroupTransferBodyDto
    : public ModelBase
{
public:
    BussinessGroupTransferBodyDto();
    virtual ~BussinessGroupTransferBodyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BussinessGroupTransferBodyDto members

    /// <summary>
    /// 移交目标用户id
    /// </summary>

    int32_t getOwnerId() const;
    bool ownerIdIsSet() const;
    void unsetownerId();
    void setOwnerId(int32_t value);


protected:
    int32_t ownerId_;
    bool ownerIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BussinessGroupTransferBodyDto_H_
