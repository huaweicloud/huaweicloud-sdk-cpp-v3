
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdateLtsConfigRequestBody_lts_id_info_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdateLtsConfigRequestBody_lts_id_info_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 日志配置信息
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  UpdateLtsConfigRequestBody_lts_id_info
    : public ModelBase
{
public:
    UpdateLtsConfigRequestBody_lts_id_info();
    virtual ~UpdateLtsConfigRequestBody_lts_id_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateLtsConfigRequestBody_lts_id_info members

    /// <summary>
    /// 企业项目id
    /// </summary>

    std::string getEpsId() const;
    bool epsIdIsSet() const;
    void unsetepsId();
    void setEpsId(const std::string& value);

    /// <summary>
    /// region
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 日志组id
    /// </summary>

    std::string getLtsGroupId() const;
    bool ltsGroupIdIsSet() const;
    void unsetltsGroupId();
    void setLtsGroupId(const std::string& value);

    /// <summary>
    /// 日志流id
    /// </summary>

    std::string getLtsAttackStreamId() const;
    bool ltsAttackStreamIdIsSet() const;
    void unsetltsAttackStreamId();
    void setLtsAttackStreamId(const std::string& value);


protected:
    std::string epsId_;
    bool epsIdIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string ltsGroupId_;
    bool ltsGroupIdIsSet_;
    std::string ltsAttackStreamId_;
    bool ltsAttackStreamIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdateLtsConfigRequestBody_lts_id_info_H_
