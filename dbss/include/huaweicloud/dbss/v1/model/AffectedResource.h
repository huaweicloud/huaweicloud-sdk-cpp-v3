
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AffectedResource_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AffectedResource_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/dbss/v1/model/DataResourceHead.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  AffectedResource
    : public ModelBase
{
public:
    AffectedResource();
    virtual ~AffectedResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AffectedResource members

    /// <summary>
    /// 被防护对象账户ID
    /// </summary>

    std::string getAffectedAttachedDomainId() const;
    bool affectedAttachedDomainIdIsSet() const;
    void unsetaffectedAttachedDomainId();
    void setAffectedAttachedDomainId(const std::string& value);

    /// <summary>
    /// 被防护对象项目ID
    /// </summary>

    std::string getAffectedAttachedProjectId() const;
    bool affectedAttachedProjectIdIsSet() const;
    void unsetaffectedAttachedProjectId();
    void setAffectedAttachedProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DataResourceHead getAffectedHead() const;
    bool affectedHeadIsSet() const;
    void unsetaffectedHead();
    void setAffectedHead(const DataResourceHead& value);

    /// <summary>
    /// 资源扩展信息
    /// </summary>

    Object getAffectedProperties() const;
    bool affectedPropertiesIsSet() const;
    void unsetaffectedProperties();
    void setAffectedProperties(const Object& value);

    /// <summary>
    /// 被防护(受影响）对象在防线系统内唯一ID
    /// </summary>

    std::string getAffectedProtectedId() const;
    bool affectedProtectedIdIsSet() const;
    void unsetaffectedProtectedId();
    void setAffectedProtectedId(const std::string& value);

    /// <summary>
    /// 被防护(受影响）对象子类型: 固定为：DB
    /// </summary>

    std::string getAffectedSubtype() const;
    bool affectedSubtypeIsSet() const;
    void unsetaffectedSubtype();
    void setAffectedSubtype(const std::string& value);

    /// <summary>
    /// 被防护(受影响）对象类型，数据库资产，固定为：Data
    /// </summary>

    std::string getAffectedType() const;
    bool affectedTypeIsSet() const;
    void unsetaffectedType();
    void setAffectedType(const std::string& value);

    /// <summary>
    /// 被防护对象urn
    /// </summary>

    std::string getAffectedUrn() const;
    bool affectedUrnIsSet() const;
    void unsetaffectedUrn();
    void setAffectedUrn(const std::string& value);

    /// <summary>
    /// 被防护对象URN扩展
    /// </summary>

    std::string getAffectedUrnext() const;
    bool affectedUrnextIsSet() const;
    void unsetaffectedUrnext();
    void setAffectedUrnext(const std::string& value);

    /// <summary>
    /// 被防护(受影响）对象值，云下数据库同affectedProtectedId，云上不传
    /// </summary>

    std::string getAffectedValue() const;
    bool affectedValueIsSet() const;
    void unsetaffectedValue();
    void setAffectedValue(const std::string& value);


protected:
    std::string affectedAttachedDomainId_;
    bool affectedAttachedDomainIdIsSet_;
    std::string affectedAttachedProjectId_;
    bool affectedAttachedProjectIdIsSet_;
    DataResourceHead affectedHead_;
    bool affectedHeadIsSet_;
    Object affectedProperties_;
    bool affectedPropertiesIsSet_;
    std::string affectedProtectedId_;
    bool affectedProtectedIdIsSet_;
    std::string affectedSubtype_;
    bool affectedSubtypeIsSet_;
    std::string affectedType_;
    bool affectedTypeIsSet_;
    std::string affectedUrn_;
    bool affectedUrnIsSet_;
    std::string affectedUrnext_;
    bool affectedUrnextIsSet_;
    std::string affectedValue_;
    bool affectedValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AffectedResource_H_
