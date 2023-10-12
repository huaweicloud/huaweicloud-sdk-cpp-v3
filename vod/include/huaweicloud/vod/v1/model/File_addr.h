
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_File_addr_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_File_addr_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 媒资存储参数信息。
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  File_addr
    : public ModelBase
{
public:
    File_addr();
    virtual ~File_addr();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// File_addr members

    /// <summary>
    /// OBS的bucket名称。
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);

    /// <summary>
    /// 桶所在的区域名， 如“华北-北京四”的区域名为“cn-north-4”，创建的桶所在区域必须和点播服务所在区域保持一致。
    /// </summary>

    std::string getLocation() const;
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::string& value);

    /// <summary>
    /// 文件的存储路径。
    /// </summary>

    std::string getObject() const;
    bool objectIsSet() const;
    void unsetobject();
    void setObject(const std::string& value);


protected:
    std::string bucket_;
    bool bucketIsSet_;
    std::string location_;
    bool locationIsSet_;
    std::string object_;
    bool objectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_File_addr_H_
