
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSupabaseApplicationFlavorsRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSupabaseApplicationFlavorsRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ListSupabaseApplicationFlavorsRequest
    : public ModelBase
{
public:
    ListSupabaseApplicationFlavorsRequest();
    virtual ~ListSupabaseApplicationFlavorsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSupabaseApplicationFlavorsRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getAzCode() const;
    bool azCodeIsSet() const;
    void unsetazCode();
    void setAzCode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    bool isIsFree() const;
    bool isFreeIsSet() const;
    void unsetisFree();
    void setIsFree(bool value);

    /// <summary>
    /// 
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string specCode_;
    bool specCodeIsSet_;
    std::string azCode_;
    bool azCodeIsSet_;
    bool isFree_;
    bool isFreeIsSet_;
    std::string mode_;
    bool modeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSupabaseApplicationFlavorsRequest& dereference_from_shared_ptr(std::shared_ptr<ListSupabaseApplicationFlavorsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSupabaseApplicationFlavorsRequest_H_
