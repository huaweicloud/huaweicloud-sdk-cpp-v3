
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListDDosStatusResponse_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListDDosStatusResponse_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/antiddos/v1/model/DDosStatus.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  ListDDosStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDDosStatusResponse();
    virtual ~ListDDosStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDDosStatusResponse members

    /// <summary>
    /// 弹性IP总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 防护状态列表
    /// </summary>

    std::vector<DDosStatus>& getDdosStatus();
    bool ddosStatusIsSet() const;
    void unsetddosStatus();
    void setDdosStatus(const std::vector<DDosStatus>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<DDosStatus> ddosStatus_;
    bool ddosStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListDDosStatusResponse_H_
