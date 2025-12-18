
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_IdMarkDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_IdMarkDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  IdMarkDTO
    : public ModelBase
{
public:
    IdMarkDTO();
    virtual ~IdMarkDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IdMarkDTO members

    /// <summary>
    /// 唯一标识。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// id对应的回显描述，一般为名称等。
    /// </summary>

    std::string getMark() const;
    bool markIsSet() const;
    void unsetmark();
    void setMark(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string mark_;
    bool markIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_IdMarkDTO_H_
