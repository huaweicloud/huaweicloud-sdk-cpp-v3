
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ResizeStarRocksFlavorRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ResizeStarRocksFlavorRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/SrFlavorResizeReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ResizeStarRocksFlavorRequest
    : public ModelBase
{
public:
    ResizeStarRocksFlavorRequest();
    virtual ~ResizeStarRocksFlavorRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResizeStarRocksFlavorRequest members

    /// <summary>
    /// TaurusDB实例ID，严格匹配UUID规则。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 请求语言类型。默认en-us。 取值范围： - en-us - zh-cn
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SrFlavorResizeReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SrFlavorResizeReq& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    SrFlavorResizeReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ResizeStarRocksFlavorRequest& dereference_from_shared_ptr(std::shared_ptr<ResizeStarRocksFlavorRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ResizeStarRocksFlavorRequest_H_
