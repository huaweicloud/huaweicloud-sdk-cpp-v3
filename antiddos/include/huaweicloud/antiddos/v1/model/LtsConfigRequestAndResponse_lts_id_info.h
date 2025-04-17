
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_LtsConfigRequestAndResponse_lts_id_info_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_LtsConfigRequestAndResponse_lts_id_info_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 日志信息
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  LtsConfigRequestAndResponse_lts_id_info
    : public ModelBase
{
public:
    LtsConfigRequestAndResponse_lts_id_info();
    virtual ~LtsConfigRequestAndResponse_lts_id_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LtsConfigRequestAndResponse_lts_id_info members

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

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_LtsConfigRequestAndResponse_lts_id_info_H_
