
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_UpdateClusterSettingRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_UpdateClusterSettingRequest_H_

#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtable/v2/model/HbaseModifySettingV2Req.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  UpdateClusterSettingRequest
    : public ModelBase
{
public:
    UpdateClusterSettingRequest();
    virtual ~UpdateClusterSettingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateClusterSettingRequest members

    /// <summary>
    /// 集群ID
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 语言类型
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    HbaseModifySettingV2Req getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const HbaseModifySettingV2Req& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    HbaseModifySettingV2Req body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateClusterSettingRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateClusterSettingRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_UpdateClusterSettingRequest_H_
