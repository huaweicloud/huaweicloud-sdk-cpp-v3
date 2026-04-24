
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_SupportLinksResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_SupportLinksResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/SupportLinkInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询可用链路信息响应体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  SupportLinksResp
    : public ModelBase
{
public:
    SupportLinksResp();
    virtual ~SupportLinksResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SupportLinksResp members

    /// <summary>
    /// 列表中的项目总数，与分页无关。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 支持的链路
    /// </summary>

    std::vector<SupportLinkInfo>& getSupportLinks();
    bool supportLinksIsSet() const;
    void unsetsupportLinks();
    void setSupportLinks(const std::vector<SupportLinkInfo>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<SupportLinkInfo> supportLinks_;
    bool supportLinksIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_SupportLinksResp_H_
