
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoVaultDelete_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoVaultDelete_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_CBR_V1_EXPORT  OpExtendInfoVaultDelete
    : public ModelBase
{
public:
    OpExtendInfoVaultDelete();
    virtual ~OpExtendInfoVaultDelete();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OpExtendInfoVaultDelete members

    /// <summary>
    /// 本次任务删除失败的资源数量
    /// </summary>

    int32_t getFailCount() const;
    bool failCountIsSet() const;
    void unsetfailCount();
    void setFailCount(int32_t value);

    /// <summary>
    /// 本次任务删除的备份总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    int32_t failCount_;
    bool failCountIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoVaultDelete_H_
