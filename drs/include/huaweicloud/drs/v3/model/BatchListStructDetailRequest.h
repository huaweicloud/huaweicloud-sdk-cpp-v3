
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchListStructDetailRequest_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchListStructDetailRequest_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/BatchQueryJobReqPage.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchListStructDetailRequest
    : public ModelBase
{
public:
    BatchListStructDetailRequest();
    virtual ~BatchListStructDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchListStructDetailRequest members

    /// <summary>
    /// 数据库支持迁移对象类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 请求语言类型
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchQueryJobReqPage getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchQueryJobReqPage& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    BatchQueryJobReqPage body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchListStructDetailRequest& dereference_from_shared_ptr(std::shared_ptr<BatchListStructDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchListStructDetailRequest_H_
