
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowMsdtcLocalHostResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowMsdtcLocalHostResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/MsdtcHostResult.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowMsdtcLocalHostResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowMsdtcLocalHostResponse();
    virtual ~ShowMsdtcLocalHostResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowMsdtcLocalHostResponse members

    /// <summary>
    /// 查询状态 processing:查询中 success：查询成功 fail:查询失败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// host信息列表
    /// </summary>

    std::vector<MsdtcHostResult>& getHosts();
    bool hostsIsSet() const;
    void unsethosts();
    void setHosts(const std::vector<MsdtcHostResult>& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::vector<MsdtcHostResult> hosts_;
    bool hostsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowMsdtcLocalHostResponse_H_
