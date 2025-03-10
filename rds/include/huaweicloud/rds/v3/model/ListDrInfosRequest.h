
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDrInfosRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDrInfosRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/QueryDRInfoRequest.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListDrInfosRequest
    : public ModelBase
{
public:
    ListDrInfosRequest();
    virtual ~ListDrInfosRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDrInfosRequest members

    /// <summary>
    /// 语言。默认en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    QueryDRInfoRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const QueryDRInfoRequest& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    QueryDRInfoRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDrInfosRequest& dereference_from_shared_ptr(std::shared_ptr<ListDrInfosRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDrInfosRequest_H_
