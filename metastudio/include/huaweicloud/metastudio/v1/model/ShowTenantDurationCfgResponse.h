
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTenantDurationCfgResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTenantDurationCfgResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowTenantDurationCfgResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTenantDurationCfgResponse();
    virtual ~ShowTenantDurationCfgResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTenantDurationCfgResponse members

    /// <summary>
    /// 租户id
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 基础版最低时长（秒）
    /// </summary>

    int32_t getBasicMin() const;
    bool basicMinIsSet() const;
    void unsetbasicMin();
    void setBasicMin(int32_t value);

    /// <summary>
    /// 基础版最高时长（秒）
    /// </summary>

    int32_t getBasicMax() const;
    bool basicMaxIsSet() const;
    void unsetbasicMax();
    void setBasicMax(int32_t value);

    /// <summary>
    /// 建议时长（秒）
    /// </summary>

    int32_t getBasicAdviceValue() const;
    bool basicAdviceValueIsSet() const;
    void unsetbasicAdviceValue();
    void setBasicAdviceValue(int32_t value);

    /// <summary>
    /// 进阶版最低时长（秒）
    /// </summary>

    int32_t getMiddleMin() const;
    bool middleMinIsSet() const;
    void unsetmiddleMin();
    void setMiddleMin(int32_t value);

    /// <summary>
    /// 进阶版最高时长（秒）
    /// </summary>

    int32_t getMiddleMax() const;
    bool middleMaxIsSet() const;
    void unsetmiddleMax();
    void setMiddleMax(int32_t value);

    /// <summary>
    /// 建议时长（秒）
    /// </summary>

    int32_t getMiddleAdviceValue() const;
    bool middleAdviceValueIsSet() const;
    void unsetmiddleAdviceValue();
    void setMiddleAdviceValue(int32_t value);

    /// <summary>
    /// 高级版最低时长（秒）
    /// </summary>

    int32_t getAdvanceMin() const;
    bool advanceMinIsSet() const;
    void unsetadvanceMin();
    void setAdvanceMin(int32_t value);

    /// <summary>
    /// 高级版最高时长（秒）
    /// </summary>

    int32_t getAdvanceMax() const;
    bool advanceMaxIsSet() const;
    void unsetadvanceMax();
    void setAdvanceMax(int32_t value);

    /// <summary>
    /// 建议时长（秒）
    /// </summary>

    int32_t getAdvanceAdviceValue() const;
    bool advanceAdviceValueIsSet() const;
    void unsetadvanceAdviceValue();
    void setAdvanceAdviceValue(int32_t value);

    /// <summary>
    /// flexus版最低时长（秒）
    /// </summary>

    int32_t getFlexusMin() const;
    bool flexusMinIsSet() const;
    void unsetflexusMin();
    void setFlexusMin(int32_t value);

    /// <summary>
    /// flexus版最高时长（秒）
    /// </summary>

    int32_t getFlexusMax() const;
    bool flexusMaxIsSet() const;
    void unsetflexusMax();
    void setFlexusMax(int32_t value);

    /// <summary>
    /// flexus建议时长（秒）
    /// </summary>

    int32_t getFlexusAdviceValue() const;
    bool flexusAdviceValueIsSet() const;
    void unsetflexusAdviceValue();
    void setFlexusAdviceValue(int32_t value);

    /// <summary>
    /// 出门问问最低时长（秒）
    /// </summary>

    int32_t getCmwwMin() const;
    bool cmwwMinIsSet() const;
    void unsetcmwwMin();
    void setCmwwMin(int32_t value);

    /// <summary>
    /// 出门问问最高时长（秒）
    /// </summary>

    int32_t getCmwwMax() const;
    bool cmwwMaxIsSet() const;
    void unsetcmwwMax();
    void setCmwwMax(int32_t value);

    /// <summary>
    /// 出门问问建议时长（秒）
    /// </summary>

    int32_t getCmwwAdviceValue() const;
    bool cmwwAdviceValueIsSet() const;
    void unsetcmwwAdviceValue();
    void setCmwwAdviceValue(int32_t value);

    /// <summary>
    /// 逻辑智能最低时长（秒）
    /// </summary>

    int32_t getLjznMin() const;
    bool ljznMinIsSet() const;
    void unsetljznMin();
    void setLjznMin(int32_t value);

    /// <summary>
    /// 逻辑智能最高时长（秒）
    /// </summary>

    int32_t getLjznMax() const;
    bool ljznMaxIsSet() const;
    void unsetljznMax();
    void setLjznMax(int32_t value);

    /// <summary>
    /// 逻辑智能建议时长（秒）
    /// </summary>

    int32_t getLjznAdviceValue() const;
    bool ljznAdviceValueIsSet() const;
    void unsetljznAdviceValue();
    void setLjznAdviceValue(int32_t value);


protected:
    std::string tenantId_;
    bool tenantIdIsSet_;
    int32_t basicMin_;
    bool basicMinIsSet_;
    int32_t basicMax_;
    bool basicMaxIsSet_;
    int32_t basicAdviceValue_;
    bool basicAdviceValueIsSet_;
    int32_t middleMin_;
    bool middleMinIsSet_;
    int32_t middleMax_;
    bool middleMaxIsSet_;
    int32_t middleAdviceValue_;
    bool middleAdviceValueIsSet_;
    int32_t advanceMin_;
    bool advanceMinIsSet_;
    int32_t advanceMax_;
    bool advanceMaxIsSet_;
    int32_t advanceAdviceValue_;
    bool advanceAdviceValueIsSet_;
    int32_t flexusMin_;
    bool flexusMinIsSet_;
    int32_t flexusMax_;
    bool flexusMaxIsSet_;
    int32_t flexusAdviceValue_;
    bool flexusAdviceValueIsSet_;
    int32_t cmwwMin_;
    bool cmwwMinIsSet_;
    int32_t cmwwMax_;
    bool cmwwMaxIsSet_;
    int32_t cmwwAdviceValue_;
    bool cmwwAdviceValueIsSet_;
    int32_t ljznMin_;
    bool ljznMinIsSet_;
    int32_t ljznMax_;
    bool ljznMaxIsSet_;
    int32_t ljznAdviceValue_;
    bool ljznAdviceValueIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTenantDurationCfgResponse_H_
