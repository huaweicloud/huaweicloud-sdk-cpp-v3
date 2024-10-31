
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ProtectObjectVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ProtectObjectVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ProtectObjectVO
    : public ModelBase
{
public:
    ProtectObjectVO();
    virtual ~ProtectObjectVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProtectObjectVO members

    /// <summary>
    /// 防护对象id，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志id。
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 防护对象名称
    /// </summary>

    std::string getObjectName() const;
    bool objectNameIsSet() const;
    void unsetobjectName();
    void setObjectName(const std::string& value);

    /// <summary>
    /// 防护对象类型：0 南北向，1 东西向护对象类型
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);


protected:
    std::string objectId_;
    bool objectIdIsSet_;
    std::string objectName_;
    bool objectNameIsSet_;
    int32_t type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ProtectObjectVO_H_
