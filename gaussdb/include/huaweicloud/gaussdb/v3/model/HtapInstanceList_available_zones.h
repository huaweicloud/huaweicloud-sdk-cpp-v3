
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapInstanceList_available_zones_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapInstanceList_available_zones_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  HtapInstanceList_available_zones
    : public ModelBase
{
public:
    HtapInstanceList_available_zones();
    virtual ~HtapInstanceList_available_zones();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HtapInstanceList_available_zones members

    /// <summary>
    /// 可用区码。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 可用区描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 可用区类型。
    /// </summary>

    std::string getAzType() const;
    bool azTypeIsSet() const;
    void unsetazType();
    void setAzType(const std::string& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string azType_;
    bool azTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapInstanceList_available_zones_H_
