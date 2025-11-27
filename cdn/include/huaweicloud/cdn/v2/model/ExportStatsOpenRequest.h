
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ExportStatsOpenRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ExportStatsOpenRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/ExportVo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ExportStatsOpenRequest
    : public ModelBase
{
public:
    ExportStatsOpenRequest();
    virtual ~ExportStatsOpenRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExportStatsOpenRequest members

    /// <summary>
    /// 当用户开启企业项目功能时，该参数生效，表示查询资源所属项目，\&quot;all\&quot;表示所有项目。注意：当使用子账号调用接口时，该参数必传。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ExportVo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ExportVo& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    ExportVo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ExportStatsOpenRequest& dereference_from_shared_ptr(std::shared_ptr<ExportStatsOpenRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ExportStatsOpenRequest_H_
