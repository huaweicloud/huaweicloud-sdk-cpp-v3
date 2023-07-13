
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreatefavoriteReqbody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreatefavoriteReqbody_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_LTS_V2_EXPORT  CreatefavoriteReqbody
    : public ModelBase
{
public:
    CreatefavoriteReqbody();
    virtual ~CreatefavoriteReqbody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreatefavoriteReqbody members

    /// <summary>
    /// 企业项目id
    /// </summary>

    std::string getEpsId() const;
    bool epsIdIsSet() const;
    void unsetepsId();
    void setEpsId(const std::string& value);

    /// <summary>
    /// 收藏资源id
    /// </summary>

    std::string getFavoriteResourceId() const;
    bool favoriteResourceIdIsSet() const;
    void unsetfavoriteResourceId();
    void setFavoriteResourceId(const std::string& value);

    /// <summary>
    /// 收藏资源类型
    /// </summary>

    std::string getFavoriteResourceType() const;
    bool favoriteResourceTypeIsSet() const;
    void unsetfavoriteResourceType();
    void setFavoriteResourceType(const std::string& value);

    /// <summary>
    /// 日志组id
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 日志组名称
    /// </summary>

    std::string getLogGroupName() const;
    bool logGroupNameIsSet() const;
    void unsetlogGroupName();
    void setLogGroupName(const std::string& value);

    /// <summary>
    /// 日志流id
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

    /// <summary>
    /// 日志流名称
    /// </summary>

    std::string getLogStreamName() const;
    bool logStreamNameIsSet() const;
    void unsetlogStreamName();
    void setLogStreamName(const std::string& value);


protected:
    std::string epsId_;
    bool epsIdIsSet_;
    std::string favoriteResourceId_;
    bool favoriteResourceIdIsSet_;
    std::string favoriteResourceType_;
    bool favoriteResourceTypeIsSet_;
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string logGroupName_;
    bool logGroupNameIsSet_;
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    std::string logStreamName_;
    bool logStreamNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreatefavoriteReqbody_H_
