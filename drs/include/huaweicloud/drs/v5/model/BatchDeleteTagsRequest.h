
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchDeleteTagsRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchDeleteTagsRequest_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/BatchDeleteTagReq.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  BatchDeleteTagsRequest
    : public ModelBase
{
public:
    BatchDeleteTagsRequest();
    virtual ~BatchDeleteTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteTagsRequest members

    /// <summary>
    /// 资源类型。 - migration：实时迁移 - sync：实时同步 - cloudDataGuard：实时灾备 - subscription：数据订阅 - backupMigration：备份迁移 - replay：录制回放
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 资源ID，即DRS任务ID。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchDeleteTagReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchDeleteTagReq& value);


protected:
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    BatchDeleteTagReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchDeleteTagsRequest_H_
