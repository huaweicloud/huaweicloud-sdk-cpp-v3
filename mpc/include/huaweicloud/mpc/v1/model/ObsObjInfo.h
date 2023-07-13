
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ObsObjInfo_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ObsObjInfo_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  ObsObjInfo
    : public ModelBase
{
public:
    ObsObjInfo();
    virtual ~ObsObjInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ObsObjInfo members

    /// <summary>
    /// OBS的bucket名称。 
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);

    /// <summary>
    /// OBS桶所在的区域，且必须与使用的MPC区域保持一致。 
    /// </summary>

    std::string getLocation() const;
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::string& value);

    /// <summary>
    /// OBS对象路径，遵守OSS Object定义。  - 当用于指示input时,需要指定到具体对象。 - 当用于指示output时, 只需指定到转码结果期望存放的路径。 
    /// </summary>

    std::string getObject() const;
    bool objectIsSet() const;
    void unsetobject();
    void setObject(const std::string& value);

    /// <summary>
    /// 文件名，仅用于转封装指定输出名称。  - 当指定了此参数时，输出的对象名为object/file_name 。 - 当不指定此参数时，输出的对象名为object/xxx，其中xxx由MPC指定。 
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);


protected:
    std::string bucket_;
    bool bucketIsSet_;
    std::string location_;
    bool locationIsSet_;
    std::string object_;
    bool objectIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ObsObjInfo_H_
