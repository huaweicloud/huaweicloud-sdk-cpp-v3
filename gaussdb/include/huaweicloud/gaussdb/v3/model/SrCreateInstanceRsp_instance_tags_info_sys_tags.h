
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SrCreateInstanceRsp_instance_tags_info_sys_tags_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SrCreateInstanceRsp_instance_tags_info_sys_tags_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SrCreateInstanceRsp_instance_tags_info_sys_tags
    : public ModelBase
{
public:
    SrCreateInstanceRsp_instance_tags_info_sys_tags();
    virtual ~SrCreateInstanceRsp_instance_tags_info_sys_tags();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SrCreateInstanceRsp_instance_tags_info_sys_tags members

    /// <summary>
    /// 标签键。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 标签值。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SrCreateInstanceRsp_instance_tags_info_sys_tags_H_
