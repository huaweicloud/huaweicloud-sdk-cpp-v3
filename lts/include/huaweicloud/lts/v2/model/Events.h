
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_Events_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_Events_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/Annotations.h>
#include <string>
#include <huaweicloud/lts/v2/model/Metadata.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  Events
    : public ModelBase
{
public:
    Events();
    virtual ~Events();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Events members

    /// <summary>
    /// 
    /// </summary>

    Annotations getAnnotations() const;
    bool annotationsIsSet() const;
    void unsetannotations();
    void setAnnotations(const Annotations& value);

    /// <summary>
    /// 
    /// </summary>

    Metadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const Metadata& value);

    /// <summary>
    /// 到达时间(时间戳)
    /// </summary>

    int64_t getArrivesAt() const;
    bool arrivesAtIsSet() const;
    void unsetarrivesAt();
    void setArrivesAt(int64_t value);

    /// <summary>
    /// 告警清除时间(时间戳)
    /// </summary>

    int64_t getEndsAt() const;
    bool endsAtIsSet() const;
    void unsetendsAt();
    void setEndsAt(int64_t value);

    /// <summary>
    /// 告警id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 告警产生时间(时间戳)
    /// </summary>

    int64_t getStartsAt() const;
    bool startsAtIsSet() const;
    void unsetstartsAt();
    void setStartsAt(int64_t value);

    /// <summary>
    /// 告警自动清除时间(时间戳)
    /// </summary>

    int64_t getTimeout() const;
    bool timeoutIsSet() const;
    void unsettimeout();
    void setTimeout(int64_t value);

    /// <summary>
    /// 告警规则类型(SQL/关键词)
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    Annotations annotations_;
    bool annotationsIsSet_;
    Metadata metadata_;
    bool metadataIsSet_;
    int64_t arrivesAt_;
    bool arrivesAtIsSet_;
    int64_t endsAt_;
    bool endsAtIsSet_;
    std::string id_;
    bool idIsSet_;
    int64_t startsAt_;
    bool startsAtIsSet_;
    int64_t timeout_;
    bool timeoutIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_Events_H_
