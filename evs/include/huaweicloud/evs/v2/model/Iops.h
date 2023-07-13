
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_Iops_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_Iops_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  Iops
    : public ModelBase
{
public:
    Iops();
    virtual ~Iops();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Iops members

    /// <summary>
    /// 冻结标签。
    /// </summary>

    bool isFrozened() const;
    bool frozenedIsSet() const;
    void unsetfrozened();
    void setFrozened(bool value);

    /// <summary>
    /// 云硬盘iops标识。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// iops大小。
    /// </summary>

    int32_t getTotalVal() const;
    bool totalValIsSet() const;
    void unsettotalVal();
    void setTotalVal(int32_t value);


protected:
    bool frozened_;
    bool frozenedIsSet_;
    std::string id_;
    bool idIsSet_;
    int32_t totalVal_;
    bool totalValIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_Iops_H_
