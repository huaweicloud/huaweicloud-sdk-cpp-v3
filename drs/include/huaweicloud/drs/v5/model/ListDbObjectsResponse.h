
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ListDbObjectsResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ListDbObjectsResponse_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/TargetRootDb.h>
#include <string>
#include <map>
#include <vector>
#include <huaweicloud/drs/v5/model/DatabaseObject.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ListDbObjectsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDbObjectsResponse();
    virtual ~ListDbObjectsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListDbObjectsResponse members

    /// <summary>
    /// 
    /// </summary>

    TargetRootDb getTargetRootDb() const;
    bool targetRootDbIsSet() const;
    void unsettargetRootDb();
    void setTargetRootDb(const TargetRootDb& value);

    /// <summary>
    /// 数据库对象迁移或同步信息。
    /// </summary>

    std::map<std::string, DatabaseObject>& getObjectInfo();
    bool objectInfoIsSet() const;
    void unsetobjectInfo();
    void setObjectInfo(const std::map<std::string, DatabaseObject>& value);

    /// <summary>
    /// 库下表数量的阈值。
    /// </summary>

    int32_t getMaxTableNum() const;
    bool maxTableNumIsSet() const;
    void unsetmaxTableNum();
    void setMaxTableNum(int32_t value);

    /// <summary>
    /// 获取提交查询对象选择信息的状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 该数据库在实时同步场景下的类型
    /// </summary>

    std::string getObjectScope() const;
    bool objectScopeIsSet() const;
    void unsetobjectScope();
    void setObjectScope(const std::string& value);


protected:
    TargetRootDb targetRootDb_;
    bool targetRootDbIsSet_;
    std::map<std::string, DatabaseObject> objectInfo_;
    bool objectInfoIsSet_;
    int32_t maxTableNum_;
    bool maxTableNumIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string objectScope_;
    bool objectScopeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ListDbObjectsResponse_H_
